
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int tv_sec; int tv_usec; } ;
struct TYPE_6__ {int tv_usec; int tv_sec; } ;
struct TYPE_8__ {unsigned int description_epoch; char* name; scalar_t__ type; unsigned int alloc_backtrace_size; char** alloc_backtrace; unsigned int dealloc_backtrace_size; char** dealloc_backtrace; TYPE_2__ dealloc_time; scalar_t__ dealloc_thread; scalar_t__ dealloc_pc; scalar_t__ deallocated_p; scalar_t__ low; scalar_t__ high; scalar_t__ alloc_thread; scalar_t__ alloc_pc; TYPE_1__ alloc_time; scalar_t__ watching_p; int liveness; int write_count; int read_count; } ;
typedef TYPE_3__ __mf_object_t ;
struct TYPE_9__ {scalar_t__ backtrace; scalar_t__ persistent_count; scalar_t__ abbreviate; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_4__ VAR_6 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_1 (__mf_object_t *VAR_8)
{
  static unsigned VAR_9 = 0;
  if (VAR_8 == ((void*)0))
    {
      VAR_9 ++;
      return;
    }

  if (VAR_6.abbreviate && VAR_8->description_epoch == VAR_9)
    {
      FUNC_0 (VAR_7,
               "mudflap %sobject %p: name=`%s'\n",
               (VAR_8->deallocated_p ? "dead " : ""),
               (void *) VAR_8, (VAR_8->name ? VAR_8->name : ""));
      return;
    }
  else
    VAR_8->description_epoch = VAR_9;

  FUNC_0 (VAR_7,
           "mudflap %sobject %p: name=`%s'\n"
           "bounds=[%p,%p] size=%lu area=%s check=%ur/%uw liveness=%u%s\n"
           "alloc time=%d.%06d pc=%p"



           "\n",
           (VAR_8->deallocated_p ? "dead " : ""),
           (void *) VAR_8, (VAR_8->name ? VAR_8->name : ""),
           (void *) VAR_8->low, (void *) VAR_8->high,
           (unsigned long) (VAR_8->high - VAR_8->low + 1),
           (VAR_8->type == VAR_3 ? "no-access" :
            VAR_8->type == VAR_1 ? "heap" :
            VAR_8->type == VAR_2 ? "heap-init" :
            VAR_8->type == VAR_4 ? "stack" :
            VAR_8->type == VAR_5 ? "static" :
            VAR_8->type == VAR_0 ? "guess" :
            "unknown"),
           VAR_8->read_count, VAR_8->write_count, VAR_8->liveness,
           VAR_8->watching_p ? " watching" : "",
           VAR_8->alloc_time.tv_sec, VAR_8->alloc_time.tv_usec,
           (void *) VAR_8->alloc_pc



           );

  if (VAR_6.backtrace > 0)
  {
    unsigned VAR_10;
    for (VAR_10=0; VAR_10<VAR_8->alloc_backtrace_size; VAR_10++)
      FUNC_0 (VAR_7, "      %s\n", VAR_8->alloc_backtrace[VAR_10]);
  }

  if (VAR_6.persistent_count > 0)
    {
      if (VAR_8->deallocated_p)
        {
          FUNC_0 (VAR_7, "dealloc time=%d.%06d pc=%p"



                   "\n",
                   VAR_8->dealloc_time.tv_sec, VAR_8->dealloc_time.tv_usec,
                   (void *) VAR_8->dealloc_pc



                   );


          if (VAR_6.backtrace > 0)
          {
            unsigned VAR_11;
            for (VAR_11=0; VAR_11<VAR_8->dealloc_backtrace_size; VAR_11++)
              FUNC_0 (VAR_7, "      %s\n", VAR_8->dealloc_backtrace[VAR_11]);
          }
        }
    }
}

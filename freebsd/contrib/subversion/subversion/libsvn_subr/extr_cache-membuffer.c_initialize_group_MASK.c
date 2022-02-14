
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ group_count; scalar_t__ spare_group_count; unsigned char* group_initialized; TYPE_1__* directory; } ;
typedef TYPE_2__ svn_membuffer_t ;
struct TYPE_7__ {int chain_length; void* previous; void* next; scalar_t__ used; } ;
typedef TYPE_3__ group_header_t ;
typedef scalar_t__ apr_uint32_t ;
struct TYPE_5__ {TYPE_3__ header; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;

__attribute__((used)) static void
FUNC_0(svn_membuffer_t *VAR_2, apr_uint32_t VAR_3)
{
  unsigned char VAR_4;
  apr_uint32_t VAR_5;


  apr_uint32_t VAR_6 =
      (VAR_3 / VAR_0) * VAR_0;
  apr_uint32_t VAR_7 = VAR_6 + VAR_0;
  if (VAR_7 > VAR_2->group_count + VAR_2->spare_group_count)
    VAR_7 = VAR_2->group_count + VAR_2->spare_group_count;

  for (VAR_5 = VAR_6; VAR_5 < VAR_7; ++VAR_5)
    {
      group_header_t *VAR_8 = &VAR_2->directory[VAR_5].header;
      VAR_8->used = 0;
      VAR_8->chain_length = 1;
      VAR_8->next = VAR_1;
      VAR_8->previous = VAR_1;
    }


  VAR_4
    = (unsigned char)(1 << ((VAR_3 / VAR_0) % 8));
  VAR_2->group_initialized[VAR_3 / (8 * VAR_0)]
    |= VAR_4;
}

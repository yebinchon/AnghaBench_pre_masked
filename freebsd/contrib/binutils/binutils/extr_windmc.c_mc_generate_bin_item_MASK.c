
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int unichar ;
struct bin_messagetable_item {scalar_t__ data; scalar_t__ flags; scalar_t__ length; } ;
typedef int rc_uint_type ;
struct TYPE_7__ {int* message; TYPE_2__* lang; } ;
typedef TYPE_3__ mc_node_lang ;
struct TYPE_5__ {int wincp; } ;
struct TYPE_6__ {TYPE_1__ lang_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int*,char**,int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct bin_messagetable_item*,int ,int) ;
 struct bin_messagetable_item* FUNC_3 (int) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (int*) ;

__attribute__((used)) static struct bin_messagetable_item *
FUNC_8 (mc_node_lang *VAR_4, rc_uint_type *VAR_5)
{
  struct bin_messagetable_item *VAR_6 = ((void*)0);
  rc_uint_type VAR_7;

  *VAR_5 = 0;
  if (VAR_3 == 1)
    {
      unichar *VAR_8 = VAR_4->message;
      rc_uint_type VAR_9;

      VAR_9 = FUNC_7 (VAR_4->message);
      if (VAR_2 && VAR_9 != 0)
 {
   while (VAR_9 > 0 && VAR_8[VAR_9 - 1] > 0 && VAR_8[VAR_9 - 1] < 0x20)
     VAR_8[--VAR_9] = 0;
 }
      VAR_9 *= sizeof (unichar);
      VAR_7 = VAR_0 + VAR_9 + sizeof (unichar);
      VAR_6 = FUNC_3 ((VAR_7 + 3) & ~3);
      FUNC_2 (VAR_6, 0, (VAR_7 + 3) & ~3);
      FUNC_6 (VAR_6->length, (VAR_7 + 3) & ~3);
      FUNC_6 (VAR_6->flags, VAR_1);
      VAR_9 = 0;
      while (*VAR_8 != 0)
 {
   FUNC_6 (VAR_6->data + VAR_9, *VAR_8++);
   VAR_9 += 2;
 }
    }
  else
    {
      rc_uint_type VAR_10, VAR_11;
      char *VAR_12;

      FUNC_0( &VAR_11, VAR_4->message, &VAR_12, VAR_4->lang->lang_info.wincp);
      if (! VAR_12)
 FUNC_1 ("Failed to convert message to language codepage.\n");
      VAR_10 = FUNC_5 (VAR_12);
      if (VAR_2 && VAR_10 > 0)
 {
   while (VAR_10 > 0 && VAR_12[VAR_10 - 1] > 0 && VAR_12[VAR_10 - 1] < 0x20)
     VAR_12[--VAR_10] = 0;
 }
      VAR_7 = VAR_0 + VAR_10 + 1;
      VAR_6 = FUNC_3 ((VAR_7 + 3) & ~3);
      FUNC_2 (VAR_6, 0, (VAR_7 + 3) & ~3);
      FUNC_6 (VAR_6->length, (VAR_7 + 3) & ~3);
      FUNC_6 (VAR_6->flags, 0);
      FUNC_4 ((char *) VAR_6->data, VAR_12);
    }
  *VAR_5 = (VAR_7 + 3) & ~3;
  return VAR_6;
}

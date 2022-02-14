
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct hash_control {int dummy; } ;
struct TYPE_12__ {char* ptr; scalar_t__ len; } ;
typedef TYPE_1__ sb ;
struct TYPE_13__ {TYPE_1__ def; TYPE_1__ actual; } ;
typedef TYPE_2__ formal_entry ;


 int FUNC_0 (int,TYPE_1__*,TYPE_1__*,int) ;
 scalar_t__ FUNC_1 (struct hash_control*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_1__*,char) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_5 (int VAR_1, sb *VAR_2, sb *VAR_3, struct hash_control *VAR_4,
     int VAR_5, sb *VAR_6, int VAR_7)
{
  int VAR_8;
  formal_entry *VAR_9;

  VAR_8 = FUNC_0 (VAR_1, VAR_2, VAR_3, VAR_5);


  if (VAR_0
      && VAR_5 == '@'
      && (VAR_8 == VAR_1 || VAR_2->ptr[VAR_8 - 1] != '@'))
    VAR_9 = ((void*)0);
  else
    VAR_9 = (formal_entry *) FUNC_1 (VAR_4, FUNC_4 (VAR_3));
  if (VAR_9)
    {
      if (VAR_9->actual.len)
 {
   FUNC_3 (VAR_6, &VAR_9->actual);
 }
      else
 {
   FUNC_3 (VAR_6, &VAR_9->def);
 }
    }
  else if (VAR_5 == '&')
    {

      FUNC_2 (VAR_6, '&');
      FUNC_3 (VAR_6, VAR_3);
    }
  else if (VAR_7)
    {
      FUNC_3 (VAR_6, VAR_3);
    }
  else
    {
      FUNC_2 (VAR_6, '\\');
      FUNC_3 (VAR_6, VAR_3);
    }
  return VAR_8;
}

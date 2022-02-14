
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ufile_ptr ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_4__ {size_t size; int alignment_power; int filepos; } ;
typedef TYPE_1__ asection ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int *,size_t) ;
 TYPE_1__* FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,TYPE_1__*) ;
 int FUNC_4 (char*,char*,size_t) ;
 int FUNC_5 (char*,char*,char*,int) ;
 int FUNC_6 (char*) ;

bfd_boolean
FUNC_7 (bfd *VAR_2,
     char *VAR_3,
     size_t VAR_4,
     ufile_ptr VAR_5)
{
  char VAR_6[100];
  char *VAR_7;
  size_t VAR_8;
  asection *VAR_9;



  FUNC_5 (VAR_6, "%s/%d", VAR_3, FUNC_2 (VAR_2));
  VAR_8 = FUNC_6 (VAR_6) + 1;
  VAR_7 = FUNC_0 (VAR_2, VAR_8);
  if (VAR_7 == ((void*)0))
    return VAR_0;
  FUNC_4 (VAR_7, VAR_6, VAR_8);

  VAR_9 = FUNC_1 (VAR_2, VAR_7,
          VAR_1);
  if (VAR_9 == ((void*)0))
    return VAR_0;
  VAR_9->size = VAR_4;
  VAR_9->filepos = VAR_5;
  VAR_9->alignment_power = 2;

  return FUNC_3 (VAR_2, VAR_3, VAR_9);
}

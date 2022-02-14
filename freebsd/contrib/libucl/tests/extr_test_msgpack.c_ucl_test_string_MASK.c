
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int flags; } ;
typedef TYPE_1__ ucl_object_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_4 (char*,int,int ) ;
 TYPE_1__* FUNC_5 (int ) ;

__attribute__((used)) static ucl_object_t*
FUNC_6 (void)
{
 ucl_object_t *VAR_4, *VAR_5;
 int VAR_6, VAR_7;
 uint32_t VAR_8;
 char *VAR_9;

 VAR_4 = FUNC_5 (VAR_0);
 VAR_6 = FUNC_2 () % VAR_3;

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7 ++) {
  while ((VAR_8 = FUNC_2 ()) % 128 == 0);

  VAR_9 = FUNC_1 (VAR_8 % 128);
  FUNC_3 (VAR_4, FUNC_4 (VAR_9, VAR_8 % 128,
    VAR_2));
  FUNC_0 (VAR_9);

  while ((VAR_8 = FUNC_2 ()) % 512 == 0);
  VAR_9 = FUNC_1 (VAR_8 % 512);
  FUNC_3 (VAR_4, FUNC_4 (VAR_9, VAR_8 % 512,
    VAR_2));
  FUNC_0 (VAR_9);

  while ((VAR_8 = FUNC_2 ()) % 128 == 0);
  VAR_9 = FUNC_1 (VAR_8 % 128);
  VAR_5 = FUNC_4 (VAR_9, VAR_8 % 128,
    VAR_2);
  VAR_5->flags |= VAR_1;
  FUNC_3 (VAR_4, VAR_5);
  FUNC_0 (VAR_9);

  while ((VAR_8 = FUNC_2 ()) % 512 == 0);
  VAR_9 = FUNC_1 (VAR_8 % 512);
  VAR_5 = FUNC_4 (VAR_9, VAR_8 % 512,
    VAR_2);
  VAR_5->flags |= VAR_1;
  FUNC_3 (VAR_4, VAR_5);
  FUNC_0 (VAR_9);
 }


 VAR_9 = FUNC_1 (65537);
 VAR_5 = FUNC_4 (VAR_9, 65537,
   VAR_2);
 VAR_5->flags |= VAR_1;
 FUNC_3 (VAR_4, VAR_5);
 FUNC_0 (VAR_9);

 return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int module_t ;
struct TYPE_4__ {int magic; } ;
struct TYPE_3__ {TYPE_2__* buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,int ,int ) ;
 int FUNC_5 () ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_7 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int) ;
 TYPE_1__ VAR_8 ;
 int VAR_9 ;
 int FUNC_10 (int) ;
 int FUNC_11 (char*,int ,int ,int ) ;
 int FUNC_12 (char*) ;

__attribute__((used)) static int
FUNC_13(module_t VAR_10, int VAR_11, void *VAR_12)
{
 int VAR_13 = 0, VAR_14;

 switch (VAR_11) {
 case 130:
  VAR_14 = FUNC_9(1);
  if (VAR_14 != -1)
   FUNC_5();
  if (VAR_14 == 0) {
   FUNC_7(&VAR_7);
   FUNC_6(&VAR_7);
   FUNC_2(&VAR_7);
  }
  break;
 case 128:
  FUNC_12("dcons: unload\n");
  if (VAR_9 == 1) {
   FUNC_1(&VAR_5);
   FUNC_3(&VAR_7);
   FUNC_8(VAR_1);
   FUNC_8(VAR_2);
   VAR_8.buf->magic = 0;

   FUNC_4(VAR_8.buf, VAR_0, VAR_4);
  }


  while (FUNC_0(&VAR_6) > 0)
                        FUNC_11("dcunld", FUNC_10(50), FUNC_10(10), 0);
  break;
 case 129:



  break;
 default:
  VAR_13 = VAR_3;
  break;
 }
 return(VAR_13);
}

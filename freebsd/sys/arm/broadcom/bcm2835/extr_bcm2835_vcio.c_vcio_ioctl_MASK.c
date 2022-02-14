
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int u_long ;
struct thread {int dummy; } ;
struct cdev {int dummy; } ;
typedef int size ;
typedef int ptr ;
typedef int caddr_t ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (void*,int*,int) ;
 int FUNC_2 (int*,void*,int) ;
 int FUNC_3 (int*,int ) ;
 int* FUNC_4 (int,int ,int ) ;
 int FUNC_5 (void**,int ,int) ;

int
FUNC_6(struct cdev *VAR_3, u_long VAR_4, caddr_t VAR_5, int VAR_6,
    struct thread *VAR_7)
{
    int VAR_8;
    void *VAR_9;
    uint32_t VAR_10;
    uint8_t *VAR_11;

    VAR_8 = 0;
    switch(VAR_4) {
    case 128:
     FUNC_5 (&VAR_9, VAR_5, sizeof(VAR_9));
 VAR_8 = FUNC_1(VAR_9, &VAR_10, sizeof(VAR_10));

 if (VAR_8 != 0)
  break;
 VAR_11 = FUNC_4(VAR_10, VAR_1, VAR_2);

 VAR_8 = FUNC_1(VAR_9, VAR_11, VAR_10);
 if (VAR_8) {
  FUNC_3(VAR_11, VAR_1);
  break;
 }

 VAR_8 = FUNC_0(VAR_11, VAR_10);
 if (VAR_8) {
  FUNC_3(VAR_11, VAR_1);
  break;
 }

 VAR_8 = FUNC_2(VAR_11, VAR_9, VAR_10);
 FUNC_3(VAR_11, VAR_1);

 break;
    default:
 VAR_8 = VAR_0;
 break;
    }
    return (VAR_8);
}

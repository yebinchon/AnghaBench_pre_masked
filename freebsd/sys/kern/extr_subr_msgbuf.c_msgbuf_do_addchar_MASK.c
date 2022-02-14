
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
typedef scalar_t__ u_char ;
struct msgbuf {int* msg_ptr; int msg_cksum; } ;


 size_t FUNC_0 (struct msgbuf* const,size_t) ;
 size_t FUNC_1 (struct msgbuf* const,size_t) ;

__attribute__((used)) static void
FUNC_2(struct msgbuf * const VAR_0, u_int * const VAR_1, const int VAR_2)
{
 u_int VAR_3;


 VAR_3 = FUNC_1(VAR_0, *VAR_1);
 VAR_0->msg_cksum += (u_int)(u_char)VAR_2 -
     (u_int)(u_char)VAR_0->msg_ptr[VAR_3];
 VAR_0->msg_ptr[VAR_3] = VAR_2;
 *VAR_1 = FUNC_0(VAR_0, *VAR_1 + 1);
}

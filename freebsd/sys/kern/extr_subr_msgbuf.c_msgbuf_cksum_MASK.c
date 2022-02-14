
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
typedef size_t u_char ;
struct msgbuf {size_t msg_size; scalar_t__* msg_ptr; } ;



__attribute__((used)) static u_int
FUNC_0(struct msgbuf *VAR_0)
{
 u_int VAR_1, VAR_2;

 VAR_2 = 0;
 for (VAR_1 = 0; VAR_1 < VAR_0->msg_size; VAR_1++)
  VAR_2 += (u_char)VAR_0->msg_ptr[VAR_1];
 return (VAR_2);
}

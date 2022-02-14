
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_int16_t ;
struct imsgbuf {int dummy; } ;
struct ibuf {int fd; } ;
typedef int pid_t ;


 int FUNC_0 (struct ibuf*,void const*,int ) ;
 int FUNC_1 (struct imsgbuf*,struct ibuf*) ;
 struct ibuf* FUNC_2 (struct imsgbuf*,int ,int ,int ,int ) ;

int
FUNC_3(struct imsgbuf *VAR_0, u_int32_t VAR_1, u_int32_t VAR_2,
    pid_t VAR_3, int VAR_4, const void *VAR_5, u_int16_t VAR_6)
{
 struct ibuf *VAR_7;

 if ((VAR_7 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_6)) == ((void*)0))
  return (-1);

 if (FUNC_0(VAR_7, VAR_5, VAR_6) == -1)
  return (-1);

 VAR_7->fd = VAR_4;

 FUNC_1(VAR_0, VAR_7);

 return (1);
}

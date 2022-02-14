
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tv ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct proto_conn {scalar_t__ pc_magic; int * pc_proto; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct proto_conn const*) ;
 scalar_t__ FUNC_2 (int,int ,int ,struct timeval*,int) ;

int
FUNC_3(const struct proto_conn *VAR_4, int VAR_5)
{
 struct timeval VAR_6;
 int VAR_7;

 FUNC_0(VAR_4 != ((void*)0));
 FUNC_0(VAR_4->pc_magic == VAR_0);
 FUNC_0(VAR_4->pc_proto != ((void*)0));

 VAR_7 = FUNC_1(VAR_4);
 if (VAR_7 < 0)
  return (-1);

 VAR_6.tv_sec = VAR_5;
 VAR_6.tv_usec = 0;
 if (FUNC_2(VAR_7, VAR_1, VAR_3, &VAR_6, sizeof(VAR_6)) < 0)
  return (-1);
 if (FUNC_2(VAR_7, VAR_1, VAR_2, &VAR_6, sizeof(VAR_6)) < 0)
  return (-1);

 return (0);
}

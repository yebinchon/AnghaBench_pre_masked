
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_req {int dummy; } ;
struct sbuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sbuf* FUNC_0 (struct sbuf*,char*,int,int) ;
 int FUNC_1 (struct sbuf*,int ,struct sysctl_req*) ;
 int VAR_2 ;

struct sbuf *
FUNC_2(struct sbuf *VAR_3, char *VAR_4, int VAR_5,
    struct sysctl_req *VAR_6)
{


 if (VAR_4 == ((void*)0) && VAR_5 == 0)
  VAR_5 = 64;
 VAR_3 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_0 | VAR_1);
 FUNC_1(VAR_3, VAR_2, VAR_6);
 return (VAR_3);
}

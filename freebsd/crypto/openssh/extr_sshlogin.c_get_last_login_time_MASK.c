
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
typedef int time_t ;
struct logininfo {int tv_sec; int hostname; } ;


 int FUNC_0 (struct logininfo*,int ) ;
 int FUNC_1 (char*,int ,size_t) ;

time_t
FUNC_2(uid_t VAR_0, const char *VAR_1,
    char *VAR_2, size_t VAR_3)
{
 struct logininfo VAR_4;

 FUNC_0(&VAR_4, VAR_0);
 FUNC_1(VAR_2, VAR_4.hostname, VAR_3);
 return (time_t)VAR_4.tv_sec;
}

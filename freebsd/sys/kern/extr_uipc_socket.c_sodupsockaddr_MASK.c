
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_len; } ;


 int VAR_0 ;
 int FUNC_0 (struct sockaddr const*,struct sockaddr*,int ) ;
 struct sockaddr* FUNC_1 (int ,int ,int) ;

struct sockaddr *
FUNC_2(const struct sockaddr *VAR_1, int VAR_2)
{
 struct sockaddr *VAR_3;

 VAR_3 = FUNC_1(VAR_1->sa_len, VAR_0, VAR_2);
 if (VAR_3)
  FUNC_0(VAR_1, VAR_3, VAR_1->sa_len);
 return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostent_data {int dummy; } ;
struct hostent {int h_length; int h_addrtype; } ;
typedef int res_state ;
typedef int querybuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;


 struct hostent_data* FUNC_1 () ;
 struct hostent* FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int const*,int,char const*,int,struct hostent*,struct hostent_data*,int ) ;

struct hostent *
FUNC_5(const char *VAR_5, int VAR_6, const char *VAR_7, int VAR_8)
{
 struct hostent *VAR_9;
 struct hostent_data *VAR_10;
 int VAR_11;
 res_state VAR_12;

 VAR_12 = FUNC_3();
 if ((VAR_9 = FUNC_2()) == ((void*)0) ||
     (VAR_10 = FUNC_1()) == ((void*)0)) {
  FUNC_0(VAR_12, VAR_2);
  return (((void*)0));
 }
 switch (VAR_8) {
 case 128:
  VAR_9->h_addrtype = VAR_1;
  VAR_9->h_length = VAR_3;
  break;
 case 129:
 default:
  VAR_9->h_addrtype = VAR_0;
  VAR_9->h_length = VAR_4;
  break;
 }

 VAR_11 = FUNC_4((const querybuf *)VAR_5, VAR_6, VAR_7, VAR_8,
     VAR_9, VAR_10, VAR_12);
 return (VAR_11 == 0) ? VAR_9 : ((void*)0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostent_data {scalar_t__ ai_family; int ai_flags; int ai_socktype; } ;
struct hostent {scalar_t__ h_addrtype; scalar_t__ h_length; } ;
struct evutil_addrinfo {scalar_t__ ai_family; int ai_flags; int ai_socktype; } ;
typedef int hints ;
typedef int data ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;




 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;

 int FUNC_1 () ;
 struct hostent_data* FUNC_2 (struct hostent*,int,struct hostent_data*) ;
 int FUNC_3 (int,struct hostent_data**) ;
 scalar_t__ FUNC_4 (struct hostent_data*) ;
 int FUNC_5 (struct hostent_data*) ;
 int FUNC_6 (struct hostent_data*) ;
 int FUNC_7 (char const*,char const*,struct hostent_data*,struct hostent_data**,int*) ;
 int FUNC_8 (struct hostent_data*) ;
 int FUNC_9 (char const*,char const*,struct hostent_data*,struct hostent_data**) ;
 struct hostent* FUNC_10 (char const*) ;
 int FUNC_11 (char const*,struct hostent*,...) ;
 int VAR_14 ;
 int FUNC_12 (struct hostent_data*,struct hostent_data const*,int) ;
 int FUNC_13 (struct hostent_data*,int ,int) ;
 scalar_t__ FUNC_14 () ;
 scalar_t__ FUNC_15 () ;
 int FUNC_16 (char const*) ;

int
FUNC_17(const char *VAR_15, const char *VAR_16,
    const struct evutil_addrinfo *VAR_17, struct evutil_addrinfo **VAR_18)
{
 int VAR_19=0, VAR_20;
 struct hostent *VAR_21 = ((void*)0);
 struct evutil_addrinfo VAR_22;

 if (VAR_17) {
  FUNC_12(&VAR_22, VAR_17, sizeof(VAR_22));
 } else {
  FUNC_13(&VAR_22, 0, sizeof(VAR_22));
  VAR_22.ai_family = VAR_13;
 }

 FUNC_5(&VAR_22);

 VAR_20 = FUNC_7(VAR_15, VAR_16, &VAR_22, VAR_18, &VAR_19);
 if (VAR_20 != VAR_8) {

  return VAR_20;
 }

 VAR_20 = 0;

 {
  VAR_21 = FUNC_10(VAR_15);



  VAR_20 = VAR_14;




  if (!VAR_21) {

   switch (VAR_20) {
   case 128:
    return VAR_4;
   case 129:
   default:
    return VAR_5;
   case 132:
    return VAR_10;
   case 131:

   case 130:

    return VAR_9;
   }
  }

  if (VAR_21->h_addrtype != VAR_22.ai_family &&
      VAR_22.ai_family != VAR_13) {



   return VAR_10;
  }


  if (VAR_21->h_length == 0)
   return VAR_9;



  if (VAR_21->h_addrtype != VAR_11 && VAR_21->h_addrtype != VAR_12)
   return VAR_6;

  *VAR_18 = FUNC_2(VAR_21, VAR_19, &VAR_22);
  if (! *VAR_18)
   return VAR_7;
 }

 return 0;

}

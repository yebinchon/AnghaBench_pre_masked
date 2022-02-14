
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sockaddr_u ;
typedef int isc_boolean_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static isc_boolean_t
FUNC_4(
 sockaddr_u *VAR_1
 )
{
 isc_boolean_t VAR_2;





 if (FUNC_1(VAR_1))
  VAR_2 = VAR_0;
 else

  VAR_2 = FUNC_2(VAR_1);

 if (!VAR_2)
  FUNC_0(4, ("address %s is not multicast\n",
       FUNC_3(VAR_1)));

 return VAR_2;
}

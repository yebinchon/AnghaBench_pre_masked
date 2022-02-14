
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32 ;
typedef int u_int ;
typedef int u_char ;
struct peer {int dummy; } ;
typedef int sockaddr_u ;
typedef int keyid_t ;
typedef int endpt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int FUNC_1 (int *) ;
 scalar_t__ VAR_8 ;
 struct peer* FUNC_2 (int *,char const*,int *,int,int,int,int,int,int ,int,int ,int ,char const*) ;

struct peer *
FUNC_3(
 sockaddr_u * VAR_9,
 const char * VAR_10,
 endpt * VAR_11,
 int VAR_12,
 u_char VAR_13,
 u_char VAR_14,
 u_char VAR_15,
 u_char VAR_16,
 u_int VAR_17,
 u_int32 VAR_18,
 keyid_t VAR_19,
 const char * VAR_20
 )
{
 u_char VAR_21;






 switch (VAR_13) {
 case 129:
  if (FUNC_0(VAR_9))
   VAR_21 = VAR_5;
  else
   VAR_21 = VAR_4;
  break;

 case 128:
  if (VAR_10 != ((void*)0) && FUNC_1(VAR_9))
   VAR_21 = VAR_6;
  else if (FUNC_0(VAR_9))
   VAR_21 = VAR_3;
  else
   VAR_21 = VAR_7;
  break;

 default:
  VAR_21 = VAR_7;
 }
 VAR_17 |= VAR_0;
 if (VAR_8)
  VAR_17 |= VAR_1;
 if ((VAR_3 | VAR_6) & VAR_21)
  VAR_17 &= ~VAR_2;
 return FUNC_2(VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14,
     VAR_15, VAR_16, VAR_17, VAR_21, VAR_18, VAR_19, VAR_20);
}

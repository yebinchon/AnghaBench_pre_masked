
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int sa; } ;
typedef TYPE_1__ sockaddr_u ;
typedef int saddr ;
typedef int on ;
struct TYPE_13__ {scalar_t__ ignore_packets; } ;
typedef TYPE_2__ endpt ;
typedef scalar_t__ SOCKET ;
typedef int GETSOCKNAME_SOCKLEN_TYPE ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int *,int ) ;
 TYPE_2__* FUNC_5 (TYPE_1__*,int) ;
 TYPE_2__* FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (scalar_t__,int *,int*) ;
 int FUNC_8 (scalar_t__,int ,int ,void*,int) ;
 scalar_t__ FUNC_9 (scalar_t__,int ,int ) ;
 int FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static endpt *
FUNC_11(
 sockaddr_u * VAR_7,
 int VAR_8,
 int VAR_9
 )
{
 GETSOCKNAME_SOCKLEN_TYPE VAR_10;
 endpt * VAR_11;
 sockaddr_u VAR_12;
 SOCKET VAR_13;
 int VAR_14;
 int VAR_15;

 FUNC_1(4, ("Finding interface for addr %s in list of addresses\n",
      FUNC_10(VAR_7)));
 if (VAR_0 == FUNC_0(VAR_7))
  return ((void*)0);

 VAR_13 = FUNC_9(FUNC_0(VAR_7), VAR_4, 0);
 if (VAR_2 == VAR_13)
  return ((void*)0);





 if (VAR_9) {
  VAR_15 = 1;
  if (VAR_3 == FUNC_8(VAR_13, VAR_5,
      VAR_6,
      (void *)&VAR_15,
      sizeof(VAR_15))) {
   FUNC_3(VAR_13);
   return ((void*)0);
  }
 }

 VAR_14 = FUNC_4(VAR_13, &VAR_7->sa, FUNC_2(VAR_7));
 if (VAR_3 == VAR_14) {
  FUNC_3(VAR_13);
  return ((void*)0);
 }

 VAR_10 = sizeof(VAR_12);
 VAR_14 = FUNC_7(VAR_13, &VAR_12.sa, &VAR_10);
 FUNC_3(VAR_13);
 if (VAR_3 == VAR_14)
  return ((void*)0);

 FUNC_1(4, ("findlocalinterface: kernel maps %s to %s\n",
      FUNC_10(VAR_7), FUNC_10(&VAR_12)));

 VAR_11 = FUNC_6(&VAR_12, VAR_8);
 if (((void*)0) == VAR_11 || VAR_11->ignore_packets)
  VAR_11 = FUNC_5(&VAR_12,
          VAR_8 | VAR_1);


 if (VAR_11 != ((void*)0) && VAR_11->ignore_packets)
  VAR_11 = ((void*)0);

 return VAR_11;
}

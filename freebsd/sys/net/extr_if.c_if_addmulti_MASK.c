
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_dl {int sdl_len; } ;
struct sockaddr {int dummy; } ;
struct ifnet {int (* if_resolvemulti ) (struct ifnet*,struct sockaddr**,struct sockaddr*) ;int if_addmultitask; int (* if_ioctl ) (struct ifnet*,int ,int ) ;int if_multiaddrs; } ;
struct ifmultiaddr {int ifma_flags; struct ifmultiaddr* ifma_llifma; int ifma_refcount; } ;
typedef int sdl ;


 int FUNC_0 (int *,struct ifmultiaddr*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ifnet*) ;
 int FUNC_2 (struct ifnet*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_5 () ;
 struct ifmultiaddr* FUNC_6 (struct ifnet*,struct sockaddr*,struct sockaddr*,int ) ;
 struct ifmultiaddr* FUNC_7 (struct ifnet*,struct sockaddr*) ;
 int FUNC_8 (struct ifmultiaddr*) ;
 int VAR_5 ;
 int FUNC_9 (struct sockaddr*) ;
 int FUNC_10 (int ,struct ifmultiaddr*) ;
 int FUNC_11 (struct ifnet*,struct sockaddr**,struct sockaddr*) ;
 int FUNC_12 (struct ifnet*,int ,int ) ;
 int FUNC_13 (int ,int *) ;
 int VAR_6 ;

int
FUNC_14(struct ifnet *VAR_7, struct sockaddr *VAR_8,
    struct ifmultiaddr **VAR_9)
{
 struct ifmultiaddr *VAR_10, *VAR_11;
 struct sockaddr *VAR_12;
 struct sockaddr_dl VAR_13;
 int VAR_14;
 FUNC_1(VAR_7);
 VAR_10 = FUNC_7(VAR_7, VAR_8);
 if (VAR_10 != ((void*)0)) {
  VAR_10->ifma_refcount++;
  if (VAR_9 != ((void*)0))
   *VAR_9 = VAR_10;
  FUNC_2(VAR_7);
  return (0);
 }
 VAR_12 = ((void*)0);
 VAR_11 = ((void*)0);
 if (VAR_7->if_resolvemulti != ((void*)0)) {

  VAR_13.sdl_len = sizeof(VAR_13);
  VAR_12 = (struct sockaddr *)&VAR_13;
  VAR_14 = VAR_7->if_resolvemulti(VAR_7, &VAR_12, VAR_8);
  if (VAR_14)
   goto unlock_out;
 }





 VAR_10 = FUNC_6(VAR_7, VAR_8, VAR_12, VAR_2);
 if (VAR_10 == ((void*)0)) {
  VAR_14 = VAR_0;
  goto free_llsa_out;
 }







 if (VAR_12 != ((void*)0)) {
  VAR_11 = FUNC_7(VAR_7, VAR_12);
  if (VAR_11 == ((void*)0)) {
   VAR_11 = FUNC_6(VAR_7, VAR_12, ((void*)0), VAR_2);
   if (VAR_11 == ((void*)0)) {
    --VAR_10->ifma_refcount;
    FUNC_8(VAR_10);
    VAR_14 = VAR_0;
    goto free_llsa_out;
   }
   VAR_11->ifma_flags |= VAR_1;
   FUNC_0(&VAR_7->if_multiaddrs, VAR_11,
       VAR_5);
  } else
   VAR_11->ifma_refcount++;
  VAR_10->ifma_llifma = VAR_11;
 }






 VAR_10->ifma_flags |= VAR_1;
 FUNC_0(&VAR_7->if_multiaddrs, VAR_10, VAR_5);

 if (VAR_9 != ((void*)0))
  *VAR_9 = VAR_10;





 FUNC_10(VAR_3, VAR_10);
 FUNC_2(VAR_7);





 if (VAR_7->if_ioctl != ((void*)0)) {
  if (FUNC_5())
   (void )(*VAR_7->if_ioctl)(VAR_7, VAR_4, 0);
  else
   FUNC_13(VAR_6, &VAR_7->if_addmultitask);
 }

 if ((VAR_12 != ((void*)0)) && (VAR_12 != (struct sockaddr *)&VAR_13))
  FUNC_9(VAR_12);

 return (0);

free_llsa_out:
 if ((VAR_12 != ((void*)0)) && (VAR_12 != (struct sockaddr *)&VAR_13))
  FUNC_9(VAR_12);

unlock_out:
 FUNC_2(VAR_7);
 return (VAR_14);
}

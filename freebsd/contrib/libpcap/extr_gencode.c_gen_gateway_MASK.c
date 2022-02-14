
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_14__ {int s_addr; } ;
struct sockaddr_in {TYPE_2__ sin_addr; } ;
struct block {int dummy; } ;
struct addrinfo {TYPE_1__* ai_addr; struct addrinfo* ai_next; } ;
struct TYPE_15__ {int linktype; } ;
typedef TYPE_3__ compiler_state_t ;
struct TYPE_13__ {int sa_family; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;

 int FUNC_0 (TYPE_3__*,char*) ;
 int FUNC_1 (struct block*,struct block*) ;
 struct block* FUNC_2 (TYPE_3__*,int const*,int ) ;
 struct block* FUNC_3 (TYPE_3__*,int const*,int ) ;
 struct block* FUNC_4 (TYPE_3__*,int ,int,int,int ,int ) ;
 struct block* FUNC_5 (TYPE_3__*,int const*,int ) ;
 int FUNC_6 (struct block*) ;
 int FUNC_7 (struct block*,struct block*) ;
 struct block* FUNC_8 (TYPE_3__*) ;
 struct block* FUNC_9 (TYPE_3__*,int const*,int ) ;
 struct block* FUNC_10 (TYPE_3__*,int const*,int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static struct block *
FUNC_12(compiler_state_t *VAR_3, const u_char *VAR_4,
    struct addrinfo *VAR_5, int VAR_6, int VAR_7)
{
 struct block *VAR_8, *VAR_9, *VAR_10;
 struct addrinfo *VAR_11;
 struct sockaddr_in *VAR_12;

 if (VAR_7 != 0)
  FUNC_0(VAR_3, "direction applied to 'gateway'");

 switch (VAR_6) {
 case 130:
 case 129:
 case 131:
 case 128:
  switch (VAR_3->linktype) {
  case 143:
  case 136:
  case 135:
   VAR_9 = FUNC_8(VAR_3);
   VAR_8 = FUNC_2(VAR_3, VAR_4, VAR_2);
   if (VAR_9 != ((void*)0))
    FUNC_1(VAR_9, VAR_8);
   break;
  case 142:
   VAR_8 = FUNC_3(VAR_3, VAR_4, VAR_2);
   break;
  case 141:
   VAR_8 = FUNC_9(VAR_3, VAR_4, VAR_2);
   break;
  case 140:
  case 133:
  case 138:
  case 139:
  case 134:
   VAR_8 = FUNC_10(VAR_3, VAR_4, VAR_2);
   break;
  case 132:





   FUNC_0(VAR_3,
       "'gateway' supported only on ethernet/FDDI/token ring/802.11/ATM LANE/Fibre Channel");
   break;
  case 137:
   VAR_8 = FUNC_5(VAR_3, VAR_4, VAR_2);
   break;
  default:
   FUNC_0(VAR_3,
       "'gateway' supported only on ethernet/FDDI/token ring/802.11/ATM LANE/Fibre Channel");
  }
  VAR_9 = ((void*)0);
  for (VAR_11 = VAR_5; VAR_11 != ((void*)0); VAR_11 = VAR_11->ai_next) {



   if (VAR_11->ai_addr != ((void*)0)) {



    if (VAR_11->ai_addr->sa_family == VAR_0) {



     VAR_12 = (struct sockaddr_in *)VAR_11->ai_addr;
     VAR_10 = FUNC_4(VAR_3,
         FUNC_11(VAR_12->sin_addr.s_addr),
         0xffffffff, VAR_6, VAR_2, VAR_1);



     if (VAR_9 == ((void*)0)) {



      VAR_9 = VAR_10;
     } else {





      FUNC_7(VAR_9, VAR_10);
      VAR_9 = VAR_10;
     }
    }
   }
  }
  if (VAR_9 == ((void*)0)) {



   return (((void*)0));
  }
  FUNC_6(VAR_9);
  FUNC_1(VAR_8, VAR_9);
  return VAR_9;
 }
 FUNC_0(VAR_3, "illegal modifier of 'gateway'");

}

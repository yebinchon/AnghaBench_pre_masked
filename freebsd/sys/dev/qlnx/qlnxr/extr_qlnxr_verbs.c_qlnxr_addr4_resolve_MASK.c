
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin_family; int sin_len; } ;
struct sockaddr {int dummy; } ;
struct qlnxr_dev {TYPE_2__* ha; } ;
struct llentry {int dummy; } ;
struct TYPE_4__ {int ifp; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,char*,int,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int *,int *,struct sockaddr*,int *,struct llentry**,...) ;

__attribute__((used)) static int
FUNC_3(struct qlnxr_dev *VAR_0,
         struct sockaddr_in *VAR_1,
         struct sockaddr_in *VAR_2,
         u8 *VAR_3)
{
 int VAR_4;





 struct llentry *VAR_5;

 VAR_4 = FUNC_2(VAR_0->ha->ifp, ((void*)0), ((void*)0), (struct sockaddr *)VAR_2,
   VAR_3, &VAR_5);


 FUNC_1(VAR_0->ha, "rc = %d "
  "sa_len = 0x%x sa_family = 0x%x IP Address = %d.%d.%d.%d "
  "Dest MAC %02x:%02x:%02x:%02x:%02x:%02x\n", VAR_4,
  VAR_2->sin_len, VAR_2->sin_family,
  FUNC_0((VAR_2->sin_addr.s_addr)),
  VAR_3[0], VAR_3[1], VAR_3[2],
  VAR_3[3], VAR_3[4], VAR_3[5]);

 return VAR_4;
}

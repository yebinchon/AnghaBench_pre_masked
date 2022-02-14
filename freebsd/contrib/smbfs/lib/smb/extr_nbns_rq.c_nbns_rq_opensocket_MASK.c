
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int s_addr; } ;
struct sockaddr_in {int sin_len; TYPE_3__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct TYPE_6__ {int s_addr; } ;
struct TYPE_7__ {TYPE_1__ sin_addr; } ;
struct nbns_rq {int nr_fd; int nr_flags; TYPE_5__* nr_if; TYPE_2__ nr_dest; } ;
typedef int opt ;
typedef int locaddr ;
struct TYPE_9__ {int s_addr; } ;
struct TYPE_10__ {TYPE_4__ id_mask; TYPE_3__ id_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int,struct sockaddr*,int) ;
 int FUNC_2 (struct sockaddr_in*,int) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int,int ,int ,int*,int) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct nbns_rq *VAR_7)
{
 struct sockaddr_in VAR_8;
 int VAR_9, VAR_10;

 VAR_10 = VAR_7->nr_fd = FUNC_4(VAR_0, VAR_3, 0);
 if (VAR_10 < 0)
  return VAR_6;
 if (VAR_7->nr_flags & VAR_2) {
  VAR_9 = 1;
  if (FUNC_3(VAR_10, VAR_4, VAR_5, &VAR_9, sizeof(VAR_9)) < 0)
   return VAR_6;
  if (VAR_7->nr_if == ((void*)0))
   return FUNC_0(VAR_1);
  FUNC_2(&VAR_8, sizeof(VAR_8));
  VAR_8.sin_family = VAR_0;
  VAR_8.sin_len = sizeof(VAR_8);
  VAR_8.sin_addr = VAR_7->nr_if->id_addr;
  VAR_7->nr_dest.sin_addr.s_addr = VAR_7->nr_if->id_addr.s_addr | ~VAR_7->nr_if->id_mask.s_addr;
  if (FUNC_1(VAR_10, (struct sockaddr*)&VAR_8, sizeof(VAR_8)) < 0)
   return VAR_6;
 }
 return 0;
}

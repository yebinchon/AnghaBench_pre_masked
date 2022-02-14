
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fst_iface {int dummy; } ;
struct fst_get_peer_ctx {int dummy; } ;
typedef int Boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (struct fst_iface*,struct fst_get_peer_ctx**,int ) ;
 int * FUNC_1 (struct fst_iface*,struct fst_get_peer_ctx**,int ) ;
 scalar_t__ FUNC_2 (int const*,int const*,int ) ;

Boolean FUNC_3(struct fst_iface *VAR_3, const u8 *VAR_4,
          Boolean VAR_5)
{
 struct fst_get_peer_ctx *VAR_6;
 const u8 *VAR_7 = FUNC_0(VAR_3, &VAR_6, VAR_5);

 for (; VAR_7 != ((void*)0); VAR_7 = FUNC_1(VAR_3, &VAR_6, VAR_5))
  if (FUNC_2(VAR_4, VAR_7, VAR_0) == 0)
   return VAR_2;

 return VAR_1;
}

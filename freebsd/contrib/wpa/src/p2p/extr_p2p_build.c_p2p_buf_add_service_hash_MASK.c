
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct p2p_data {int p2ps_seek_count; int p2ps_seek_hash; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (struct wpabuf*,int ,int) ;
 int FUNC_2 (struct wpabuf*,int) ;
 int FUNC_3 (struct wpabuf*,int ) ;

void FUNC_4(struct wpabuf *VAR_3, struct p2p_data *VAR_4)
{
 if (!VAR_4)
  return;


 FUNC_3(VAR_3, VAR_2);
 FUNC_2(VAR_3, VAR_4->p2ps_seek_count * VAR_1);
 FUNC_1(VAR_3, VAR_4->p2ps_seek_hash,
   VAR_4->p2ps_seek_count * VAR_1);
 FUNC_0(VAR_0, "P2P: * Service Hash",
      VAR_4->p2ps_seek_hash, VAR_4->p2ps_seek_count * VAR_1);
}

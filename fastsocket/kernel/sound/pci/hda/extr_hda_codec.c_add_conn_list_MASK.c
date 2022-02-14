
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_conn_list {int len; int list; int conns; int nid; } ;
struct hda_codec {int conn_list; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct hda_conn_list* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int const*,int) ;

__attribute__((used)) static int FUNC_3(struct hda_codec *VAR_2, hda_nid_t VAR_3, int VAR_4,
    const hda_nid_t *VAR_5)
{
 struct hda_conn_list *VAR_6;

 VAR_6 = FUNC_0(sizeof(*VAR_6) + VAR_4 * sizeof(hda_nid_t), VAR_1);
 if (!VAR_6)
  return -VAR_0;
 VAR_6->len = VAR_4;
 VAR_6->nid = VAR_3;
 FUNC_2(VAR_6->conns, VAR_5, VAR_4 * sizeof(hda_nid_t));
 FUNC_1(&VAR_6->list, &VAR_2->conn_list);
 return 0;
}

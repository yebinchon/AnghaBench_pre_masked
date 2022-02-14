
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct netmap_kring {size_t ring_id; size_t nkr_num_slots; char* name; int (* nm_sync ) (struct netmap_kring*,int) ;int rtail; int nr_hwtail; int nr_hwcur; int rcur; int rhead; int nkr_hwlease; struct netmap_adapter* na; } ;
struct netmap_bwrap_adapter {struct netmap_adapter* hwna; } ;
struct netmap_adapter {char* name; struct netmap_kring** tx_rings; struct netmap_bwrap_adapter* na_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct netmap_kring*,int) ;
 int FUNC_1 (struct netmap_kring*) ;
 scalar_t__ FUNC_2 (struct netmap_kring*,int ,int *) ;
 int FUNC_3 (int ,size_t) ;
 int FUNC_4 (char*,char*,...) ;
 int FUNC_5 (struct netmap_kring*,int) ;

int
FUNC_6(struct netmap_kring *VAR_2, int VAR_3)
{
 struct netmap_adapter *VAR_4 = VAR_2->na;
 struct netmap_bwrap_adapter *VAR_5 = VAR_4->na_private;
 struct netmap_adapter *VAR_6 = VAR_5->hwna;
 u_int VAR_7 = VAR_2->ring_id;
 u_int VAR_8 = VAR_2->nkr_num_slots - 1;
 struct netmap_kring *VAR_9;
 int VAR_10;

 FUNC_4("%s: na %s hwna %s",
   (VAR_2 ? VAR_2->name : "NULL!"),
   (VAR_4 ? VAR_4->name : "NULL!"),
   (VAR_6 ? VAR_6->name : "NULL!"));
 VAR_9 = VAR_6->tx_rings[VAR_7];

 if (FUNC_2(VAR_9, 0, ((void*)0))) {
  return VAR_0;
 }


 FUNC_0(VAR_2, VAR_3);
 FUNC_4("%s[%d] PRE rx(c%3d t%3d l%3d) ring(h%3d c%3d t%3d) tx(c%3d ht%3d t%3d)",
  VAR_4->name, VAR_7,
  VAR_2->nr_hwcur, VAR_2->nr_hwtail, VAR_2->nkr_hwlease,
  VAR_2->rhead, VAR_2->rcur, VAR_2->rtail,
  VAR_9->nr_hwcur, VAR_9->nr_hwtail, VAR_9->rtail);



 VAR_9->rhead = VAR_9->rcur = VAR_2->nr_hwtail;
 VAR_10 = VAR_9->nm_sync(VAR_9, VAR_3);
 if (VAR_10)
  goto put_out;



 VAR_2->rhead = VAR_2->rcur = FUNC_3(VAR_9->nr_hwtail, VAR_8);


 FUNC_0(VAR_2, VAR_3);
 FUNC_4("%s[%d] PST rx(c%3d t%3d l%3d) ring(h%3d c%3d t%3d) tx(c%3d ht%3d t%3d)",
  VAR_4->name, VAR_7,
  VAR_2->nr_hwcur, VAR_2->nr_hwtail, VAR_2->nkr_hwlease,
  VAR_2->rhead, VAR_2->rcur, VAR_2->rtail,
  VAR_9->nr_hwcur, VAR_9->nr_hwtail, VAR_9->rtail);
put_out:
 FUNC_1(VAR_9);

 return VAR_10 ? VAR_10 : VAR_1;
}

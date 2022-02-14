
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int sa_family; } ;
struct TYPE_4__ {TYPE_2__ s; } ;
struct skt {int len; TYPE_1__ sktaddr; } ;
struct get_neigh_handler {int oif; int dst; int src; } ;
typedef int addr_src ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,TYPE_2__*,int) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (struct skt*,int ,int) ;
 int FUNC_3 (int ,TYPE_2__*,int*) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 int FUNC_5 (int ,int,int ) ;

__attribute__((used)) static int FUNC_6(struct get_neigh_handler *VAR_5,
    struct skt *VAR_6, int *VAR_7)
{
 int VAR_8;
 struct skt VAR_9;
 int VAR_10;

 FUNC_2(VAR_6, 0, sizeof(*VAR_6));
 FUNC_2(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.len = sizeof(VAR_9.sktaddr);

 VAR_8 = FUNC_3(VAR_5->src,
        &VAR_9.sktaddr.s,
        &VAR_9.len);
 if (VAR_8) {
  VAR_4 = VAR_0;
  return -1;
 }

 VAR_6->len = sizeof(VAR_6->sktaddr);
 VAR_8 = FUNC_3(VAR_5->dst,
        &VAR_6->sktaddr.s,
        &VAR_6->len);
 if (VAR_8) {
  VAR_4 = VAR_0;
  return -1;
 }

 VAR_8 = FUNC_4(&VAR_6->sktaddr, VAR_1,
       VAR_5->oif);
 if (VAR_8)
  return -1;

 VAR_10 = FUNC_5(VAR_6->sktaddr.s.sa_family,
    VAR_3 | VAR_2, 0);
 if (VAR_10 == -1)
  return -1;
 VAR_8 = FUNC_0(VAR_10, &VAR_9.sktaddr.s, VAR_9.len);
 if (VAR_8) {
  FUNC_1(VAR_10);
  return -1;
 }

 *VAR_7 = VAR_10;

 return 0;
}

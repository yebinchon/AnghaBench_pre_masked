
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proto_softc {int dummy; } ;
struct proto_busdma {int sxlck; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct proto_busdma* FUNC_0 (int,int ,int) ;
 int FUNC_1 (int *,char*) ;

struct proto_busdma *
FUNC_2(struct proto_softc *VAR_3)
{
 struct proto_busdma *VAR_4;

 VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_0, VAR_1 | VAR_2);
 FUNC_1(&VAR_4->sxlck, "proto-busdma");
 return (VAR_4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rndtest_state {int rs_discard; int rs_collect; int rs_to; int rs_parent; scalar_t__ rs_begin; scalar_t__ rs_current; scalar_t__ rs_buf; scalar_t__ rs_end; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,...) ;
 int FUNC_1 (int ,char*) ;
 struct rndtest_state* FUNC_2 (int,int ,int ) ;

struct rndtest_state *
FUNC_3(device_t VAR_2)
{
 struct rndtest_state *VAR_3;

 VAR_3 = FUNC_2(sizeof (*VAR_3), VAR_0, VAR_1);
 if (VAR_3 != ((void*)0)) {
  VAR_3->rs_begin = VAR_3->rs_buf;
  VAR_3->rs_end = VAR_3->rs_buf + sizeof(VAR_3->rs_buf);
  VAR_3->rs_current = VAR_3->rs_begin;
  VAR_3->rs_discard = 1;
  VAR_3->rs_collect = 1;
  VAR_3->rs_parent = VAR_2;

  FUNC_0(&VAR_3->rs_to);



 } else
  FUNC_1(VAR_2, "rndtest_init: no memory for state block\n");
 return (VAR_3);
}

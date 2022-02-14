
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int k; } ;
struct slist {TYPE_1__ s; } ;
struct TYPE_9__ {int constant_part; } ;
struct TYPE_8__ {int off_nl; TYPE_6__ off_linkpl; } ;
typedef TYPE_2__ compiler_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct slist* FUNC_0 (TYPE_2__*,TYPE_6__*) ;
 struct slist* FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (struct slist*,struct slist*) ;

__attribute__((used)) static struct slist *
FUNC_3(compiler_state_t *VAR_13)
{
 struct slist *VAR_14, *VAR_15;

 VAR_14 = FUNC_0(VAR_13, &VAR_13->off_linkpl);
 if (VAR_14 != ((void*)0)) {
  VAR_15 = FUNC_1(VAR_13, VAR_6|VAR_4|VAR_3);
  VAR_15->s.k = VAR_13->off_linkpl.constant_part + VAR_13->off_nl;
  FUNC_2(VAR_14, VAR_15);
  VAR_15 = FUNC_1(VAR_13, VAR_1|VAR_2|VAR_5);
  VAR_15->s.k = 0xf;
  FUNC_2(VAR_14, VAR_15);
  VAR_15 = FUNC_1(VAR_13, VAR_1|VAR_8|VAR_5);
  VAR_15->s.k = 2;
  FUNC_2(VAR_14, VAR_15);







  FUNC_2(VAR_14, FUNC_1(VAR_13, VAR_1|VAR_0|VAR_12));
  FUNC_2(VAR_14, FUNC_1(VAR_13, VAR_9|VAR_11));
 } else {
  VAR_14 = FUNC_1(VAR_13, VAR_7|VAR_10|VAR_3);
  VAR_14->s.k = VAR_13->off_linkpl.constant_part + VAR_13->off_nl;
 }
 return VAR_14;
}

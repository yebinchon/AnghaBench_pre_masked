
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roff_node {int line; int pos; int tok; int type; int flags; int sec; } ;
struct roff_man {int flags; int lastsec; } ;
typedef enum roff_type { ____Placeholder_roff_type } roff_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct roff_node* FUNC_0 (int,int) ;

struct roff_node *
FUNC_1(struct roff_man *VAR_7, int VAR_8, int VAR_9,
 enum roff_type VAR_10, int VAR_11)
{
 struct roff_node *VAR_12;

 VAR_12 = FUNC_0(1, sizeof(*VAR_12));
 VAR_12->line = VAR_8;
 VAR_12->pos = VAR_9;
 VAR_12->tok = VAR_11;
 VAR_12->type = VAR_10;
 VAR_12->sec = VAR_7->lastsec;

 if (VAR_7->flags & VAR_1)
  VAR_12->flags |= VAR_4;
 else
  VAR_12->flags &= ~VAR_4;
 if ((VAR_7->flags & (VAR_5 | VAR_6)) == VAR_5)
  VAR_12->flags |= VAR_3;
 else
  VAR_12->flags &= ~VAR_3;
 if (VAR_7->flags & VAR_0)
  VAR_12->flags |= VAR_2;
 VAR_7->flags &= ~VAR_0;

 return VAR_12;
}

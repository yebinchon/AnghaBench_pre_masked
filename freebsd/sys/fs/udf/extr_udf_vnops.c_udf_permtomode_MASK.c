
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct udf_node {TYPE_2__* fentry; } ;
typedef int mode_t ;
struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ icbtag; int perm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static mode_t
FUNC_2(struct udf_node *VAR_6)
{
 uint32_t VAR_7;
 uint16_t VAR_8;
 mode_t VAR_9;

 VAR_7 = FUNC_1(VAR_6->fentry->perm);
 VAR_8 = FUNC_0(VAR_6->fentry->icbtag.flags);

 VAR_9 = VAR_7 & VAR_2;
 VAR_9 |= ((VAR_7 & VAR_0) >> 2);
 VAR_9 |= ((VAR_7 & VAR_1) >> 4);
 VAR_9 |= ((VAR_8 & VAR_5) << 4);
 VAR_9 |= ((VAR_8 & VAR_3) << 6);
 VAR_9 |= ((VAR_8 & VAR_4) << 8);

 return (VAR_9);
}

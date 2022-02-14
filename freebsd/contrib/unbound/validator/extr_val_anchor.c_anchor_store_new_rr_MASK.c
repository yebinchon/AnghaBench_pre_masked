
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct val_anchors {int dummy; } ;
struct trust_anchor {int dummy; } ;


 int VAR_0 ;
 struct trust_anchor* FUNC_0 (struct val_anchors*,int *,int ,int ,int ,scalar_t__) ;
 int FUNC_1 (int ,char*,int *,int ,int ) ;
 int FUNC_2 (int *,size_t,size_t) ;
 scalar_t__ FUNC_3 (int *,size_t,size_t) ;
 int FUNC_4 (int *,size_t,size_t) ;
 int FUNC_5 (int *,size_t,size_t) ;

__attribute__((used)) static struct trust_anchor*
FUNC_6(struct val_anchors* VAR_1, uint8_t* VAR_2, size_t VAR_3,
 size_t VAR_4)
{
 struct trust_anchor* VAR_5;
 if(!(VAR_5=FUNC_0(VAR_1, VAR_2,
  FUNC_5(VAR_2, VAR_3, VAR_4),
  FUNC_2(VAR_2, VAR_3, VAR_4),
  FUNC_4(VAR_2, VAR_3, VAR_4),
  FUNC_3(VAR_2, VAR_3, VAR_4)+2))) {
  return ((void*)0);
 }
 FUNC_1(VAR_0, "adding trusted key",
  VAR_2, FUNC_5(VAR_2, VAR_3, VAR_4),
  FUNC_2(VAR_2, VAR_3, VAR_4));
 return VAR_5;
}

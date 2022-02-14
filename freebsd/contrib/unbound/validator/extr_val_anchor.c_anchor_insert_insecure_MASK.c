
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct val_anchors {int dummy; } ;
struct trust_anchor {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct trust_anchor* FUNC_0 (struct val_anchors*,int *,int ,int ,int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char const*) ;
 int * FUNC_3 (char const*,size_t*) ;

__attribute__((used)) static struct trust_anchor*
FUNC_4(struct val_anchors* VAR_2, const char* VAR_3)
{
 struct trust_anchor* VAR_4;
 size_t VAR_5 = 0;
 uint8_t* VAR_6 = FUNC_3(VAR_3, &VAR_5);
 if(!VAR_6) {
  FUNC_2("parse error in domain name '%s'", VAR_3);
  return ((void*)0);
 }
 VAR_4 = FUNC_0(VAR_2, VAR_6, VAR_1,
  VAR_0, ((void*)0), 0);
 FUNC_1(VAR_6);
 return VAR_4;
}

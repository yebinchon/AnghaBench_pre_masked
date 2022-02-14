
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct val_anchors {int dummy; } ;
struct trust_anchor {int dummy; } ;


 struct trust_anchor* FUNC_0 (struct val_anchors*,int *,size_t,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int*) ;
 int * FUNC_3 (char*,size_t*) ;
 char* FUNC_4 (char*,char) ;

__attribute__((used)) static struct trust_anchor*
FUNC_5(struct val_anchors* VAR_0, char* VAR_1)
{
 struct trust_anchor *VAR_2;
 int VAR_3;
 uint16_t VAR_4;
 uint8_t* VAR_5;
 size_t VAR_6;

 char* VAR_7 = FUNC_4(VAR_1, ' ');
 if(!VAR_7)
  return ((void*)0);
 VAR_7[0] = 0;
 VAR_5 = FUNC_3(VAR_1, &VAR_6);
 if(!VAR_5)
  return ((void*)0);


 VAR_4 = FUNC_2(VAR_7+1, &VAR_3);
 if(VAR_3 == -1) {
  FUNC_1(VAR_5);
  return ((void*)0);
 }


 VAR_2 = FUNC_0(VAR_0, VAR_5, VAR_6, VAR_4);
 FUNC_1(VAR_5);
 return VAR_2;
}

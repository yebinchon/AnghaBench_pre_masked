
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct local_zones {int lock; int ztree; } ;
struct local_zone {int lock; int node; } ;
typedef enum localzone_type { ____Placeholder_localzone_type } localzone_type ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 struct local_zone* FUNC_2 (int *,size_t,int,int,int ) ;
 int FUNC_3 (struct local_zone*) ;
 struct local_zone* FUNC_4 (struct local_zones*,int *,size_t,int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (int *,int *) ;

__attribute__((used)) static struct local_zone*
FUNC_10(struct local_zones* VAR_0, uint8_t* VAR_1, size_t VAR_2,
 int VAR_3, enum localzone_type VAR_4, uint16_t VAR_5)
{
 struct local_zone* VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 if(!VAR_6) {
  FUNC_1(VAR_1);
  FUNC_7("out of memory");
  return ((void*)0);
 }


 FUNC_6(&VAR_0->lock);
 FUNC_6(&VAR_6->lock);
 if(!FUNC_9(&VAR_0->ztree, &VAR_6->node)) {
  struct local_zone* VAR_7;
  char VAR_8[256];
  FUNC_0(VAR_1, VAR_8);
  FUNC_8("duplicate local-zone %s", VAR_8);
  FUNC_5(&VAR_6->lock);


  VAR_7 = VAR_6;

  VAR_6 = FUNC_4(VAR_0, VAR_1, VAR_2, VAR_3, VAR_5);
  FUNC_6(&VAR_6->lock);
  FUNC_5(&VAR_0->lock);
  FUNC_3(VAR_7);
  return VAR_6;
 }
 FUNC_5(&VAR_0->lock);
 return VAR_6;
}

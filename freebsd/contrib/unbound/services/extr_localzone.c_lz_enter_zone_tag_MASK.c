
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct local_zones {int lock; } ;
struct local_zone {size_t taglen; int lock; scalar_t__ taglist; } ;
typedef int dname ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 struct local_zone* FUNC_2 (struct local_zones*,int *,size_t,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,char*) ;
 scalar_t__ FUNC_7 (int *,size_t) ;
 scalar_t__ FUNC_8 (char*,int *,size_t*) ;

__attribute__((used)) static int
FUNC_9(struct local_zones* VAR_1, char* VAR_2, uint8_t* VAR_3,
 size_t VAR_4, uint16_t VAR_5)
{
 uint8_t VAR_6[VAR_0+1];
 size_t VAR_7 = sizeof(VAR_6);
 int VAR_8, VAR_9 = 0;
 struct local_zone* VAR_10;

 if(FUNC_8(VAR_2, VAR_6, &VAR_7) != 0) {
  FUNC_6("cannot parse zone name in local-zone-tag: %s", VAR_2);
  return 0;
 }
 VAR_8 = FUNC_0(VAR_6);

 FUNC_3(&VAR_1->lock);
 VAR_10 = FUNC_2(VAR_1, VAR_6, VAR_7, VAR_8, VAR_5);
 if(!VAR_10) {
  FUNC_4(&VAR_1->lock);
  FUNC_6("no local-zone for tag %s", VAR_2);
  return 0;
 }
 FUNC_5(&VAR_10->lock);
 FUNC_4(&VAR_1->lock);
 FUNC_1(VAR_10->taglist);
 VAR_10->taglist = FUNC_7(VAR_3, VAR_4);
 VAR_10->taglen = VAR_4;
 if(VAR_10->taglist)
  VAR_9 = 1;
 FUNC_4(&VAR_10->lock);
 return VAR_9;
}

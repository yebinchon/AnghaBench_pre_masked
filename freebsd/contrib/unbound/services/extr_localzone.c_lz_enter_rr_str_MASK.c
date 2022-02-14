
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct local_zones {int lock; } ;
struct local_zone {int lock; } ;


 int FUNC_0 (int *,size_t*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char const*,int **,int *,int *) ;
 struct local_zone* FUNC_4 (struct local_zones*,int *,size_t,int,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,char const*) ;
 int FUNC_9 (struct local_zone*,char const*) ;

__attribute__((used)) static int
FUNC_10(struct local_zones* VAR_0, const char* VAR_1)
{
 uint8_t* VAR_2;
 uint16_t VAR_3, VAR_4;
 size_t VAR_5;
 int VAR_6;
 struct local_zone* VAR_7;
 int VAR_8;
 if(!FUNC_3(VAR_1, &VAR_2, &VAR_3, &VAR_4)) {
  FUNC_8("bad rr %s", VAR_1);
  return 0;
 }
 VAR_6 = FUNC_0(VAR_2, &VAR_5);
 FUNC_5(&VAR_0->lock);
 VAR_7 = FUNC_4(VAR_0, VAR_2, VAR_5, VAR_6, VAR_3, VAR_4);
 if(!VAR_7) {
  FUNC_6(&VAR_0->lock);
  FUNC_1("internal error: no zone for rr %s", VAR_1);
 }
 FUNC_7(&VAR_7->lock);
 FUNC_6(&VAR_0->lock);
 FUNC_2(VAR_2);
 VAR_8 = FUNC_9(VAR_7, VAR_1);
 FUNC_6(&VAR_7->lock);
 return VAR_8;
}

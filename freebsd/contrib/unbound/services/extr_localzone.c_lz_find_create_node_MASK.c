
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct local_zone {int namelabs; int data; int region; } ;
struct TYPE_2__ {struct local_data* key; } ;
struct local_data {size_t namelen; int namelabs; TYPE_1__ node; int name; } ;


 int FUNC_0 (int **,size_t*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 struct local_data* FUNC_3 (struct local_zone*,int *,size_t,int) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int ,int *,size_t) ;
 scalar_t__ FUNC_6 (int ,int) ;

__attribute__((used)) static int
FUNC_7(struct local_zone* VAR_0, uint8_t* VAR_1, size_t VAR_2,
 int VAR_3, struct local_data** VAR_4)
{
 struct local_data* VAR_5 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);
 if(!VAR_5) {

  VAR_5 = (struct local_data*)FUNC_6(VAR_0->region,
   sizeof(*VAR_5));
  if(!VAR_5) {
   FUNC_2("out of memory adding local data");
   return 0;
  }
  VAR_5->node.key = VAR_5;
  VAR_5->name = FUNC_5(VAR_0->region, VAR_1, VAR_2);
  if(!VAR_5->name) {
   FUNC_2("out of memory");
   return 0;
  }
  VAR_5->namelen = VAR_2;
  VAR_5->namelabs = VAR_3;
  if(!FUNC_4(&VAR_0->data, &VAR_5->node)) {
   FUNC_1(0);
  }

  if(VAR_3 > VAR_0->namelabs) {
   FUNC_0(&VAR_1, &VAR_2);
   if(!FUNC_7(VAR_0, VAR_1, VAR_2, VAR_3-1, VAR_4))
    return 0;
  }
 }
 *VAR_4 = VAR_5;
 return 1;
}

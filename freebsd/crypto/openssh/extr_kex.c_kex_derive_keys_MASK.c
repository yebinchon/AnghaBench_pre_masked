
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct sshbuf {int dummy; } ;
struct ssh {struct kex* kex; } ;
struct kex {TYPE_3__** newkeys; scalar_t__ server; int we_need; } ;
struct TYPE_5__ {int * key; } ;
struct TYPE_4__ {int * key; int * iv; } ;
struct TYPE_6__ {TYPE_2__ mac; TYPE_1__ enc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ssh*,char,int ,int *,int,struct sshbuf const*,int **) ;
 int FUNC_1 (int *) ;

int
FUNC_2(struct ssh *VAR_4, u_char *VAR_5, u_int VAR_6,
    const struct sshbuf *VAR_7)
{
 struct kex *VAR_8 = VAR_4->kex;
 u_char *VAR_9[VAR_3];
 u_int VAR_10, VAR_11, VAR_12, VAR_13;
 int VAR_14;

 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  if ((VAR_14 = FUNC_0(VAR_4, 'A'+VAR_10, VAR_8->we_need, VAR_5, VAR_6,
      VAR_7, &VAR_9[VAR_10])) != 0) {
   for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++)
    FUNC_1(VAR_9[VAR_11]);
   return VAR_14;
  }
 }
 for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {
  VAR_13 = (!VAR_8->server && VAR_12 == VAR_2) ||
      (VAR_8->server && VAR_12 == VAR_0);
  VAR_8->newkeys[VAR_12]->enc.iv = VAR_9[VAR_13 ? 0 : 1];
  VAR_8->newkeys[VAR_12]->enc.key = VAR_9[VAR_13 ? 2 : 3];
  VAR_8->newkeys[VAR_12]->mac.key = VAR_9[VAR_13 ? 4 : 5];
 }
 return 0;
}

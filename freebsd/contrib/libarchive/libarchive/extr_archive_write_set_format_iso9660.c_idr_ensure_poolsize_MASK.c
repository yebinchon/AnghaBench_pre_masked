
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idrent {int dummy; } ;
struct idr {int pool_size; struct idrent* idrent_pool; } ;
struct archive_write {int archive; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,char*) ;
 void* FUNC_1 (struct idrent*,int) ;

__attribute__((used)) static int
FUNC_2(struct archive_write *VAR_3, struct idr *VAR_4,
    int VAR_5)
{

 if (VAR_4->pool_size < VAR_5) {
  void *VAR_6;
  const int VAR_7 = (1 << 7) - 1;
  int VAR_8;

  VAR_8 = (VAR_5 + VAR_7) & ~VAR_7;
  VAR_6 = FUNC_1(VAR_4->idrent_pool, sizeof(struct idrent) * VAR_8);
  if (VAR_6 == ((void*)0)) {
   FUNC_0(&VAR_3->archive, VAR_2,
       "Can't allocate memory");
   return (VAR_0);
  }
  VAR_4->idrent_pool = (struct idrent *)VAR_6;
  VAR_4->pool_size = VAR_8;
 }
 return (VAR_1);
}

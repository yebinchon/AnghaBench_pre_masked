
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct machine {int dummy; } ;
struct dso_cache {int offset; int size; int data; } ;
struct dso {int cache; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct dso*,struct machine*) ;
 int FUNC_2 (int *,struct dso_cache*) ;
 int FUNC_3 (struct dso_cache*,int,int *,int) ;
 int FUNC_4 (struct dso_cache*) ;
 int FUNC_5 (int,int,int ) ;
 int FUNC_6 (int,int ,scalar_t__) ;
 struct dso_cache* FUNC_7 (scalar_t__) ;

__attribute__((used)) static ssize_t
FUNC_8(struct dso *VAR_5, struct machine *VAR_6,
   u64 VAR_7, u8 *VAR_8, ssize_t VAR_9)
{
 struct dso_cache *VAR_10;
 ssize_t VAR_11;
 int VAR_12;

 VAR_12 = FUNC_1(VAR_5, VAR_6);
 if (VAR_12 < 0)
  return -1;

 do {
  u64 VAR_13;

  VAR_11 = -VAR_3;

  VAR_10 = FUNC_7(sizeof(*VAR_10) + VAR_1);
  if (!VAR_10)
   break;

  VAR_13 = VAR_7 & VAR_0;
  VAR_11 = -VAR_2;

  if (-1 == FUNC_5(VAR_12, VAR_13, VAR_4))
   break;

  VAR_11 = FUNC_6(VAR_12, VAR_10->data, VAR_1);
  if (VAR_11 <= 0)
   break;

  VAR_10->offset = VAR_13;
  VAR_10->size = VAR_11;
  FUNC_2(&VAR_5->cache, VAR_10);

  VAR_11 = FUNC_3(VAR_10, VAR_7, VAR_8, VAR_9);

 } while (0);

 if (VAR_11 <= 0)
  FUNC_4(VAR_10);

 FUNC_0(VAR_12);
 return VAR_11;
}

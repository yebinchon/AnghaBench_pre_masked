
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_wbuf {int io_mutex; int jhead; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ubifs_wbuf*) ;

__attribute__((used)) static inline int FUNC_3(struct ubifs_wbuf *VAR_0)
{
 int VAR_1;

 FUNC_0(&VAR_0->io_mutex, VAR_0->jhead);
 VAR_1 = FUNC_2(VAR_0);
 FUNC_1(&VAR_0->io_mutex);
 return VAR_1;
}

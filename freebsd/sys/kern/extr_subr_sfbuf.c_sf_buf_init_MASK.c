
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
struct sf_buf {scalar_t__ kva; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct sf_buf*,int ) ;
 int FUNC_2 (char*,int*) ;
 int VAR_7 ;
 int FUNC_3 (int,int ,int *) ;
 scalar_t__ FUNC_4 (int) ;
 struct sf_buf* FUNC_5 (int,int ,int) ;
 int FUNC_6 (int *,char*,int *,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static void
FUNC_7(void *VAR_14)
{
 struct sf_buf *VAR_15;
 vm_offset_t VAR_16;
 int VAR_17;

 if (VAR_6)
  return;

 VAR_8 = VAR_4;
 FUNC_2("kern.ipc.nsfbufs", &VAR_8);

 VAR_9 = FUNC_3(VAR_8, VAR_1, &VAR_12);
 FUNC_0(&VAR_11);
 VAR_16 = FUNC_4(VAR_8 * VAR_5);
 VAR_15 = FUNC_5(VAR_8 * sizeof(struct sf_buf), VAR_1,
     VAR_2 | VAR_3);
 for (VAR_17 = 0; VAR_17 < VAR_8; VAR_17++) {
  VAR_15[VAR_17].kva = VAR_16 + VAR_17 * VAR_5;
  FUNC_1(&VAR_11, &VAR_15[VAR_17], VAR_7);
 }
 VAR_10 = 0;
 FUNC_6(&VAR_13, "sf_buf", ((void*)0), VAR_0);
}

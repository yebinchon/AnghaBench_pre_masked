
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct machine {int dummy; } ;
struct dso {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct dso*,struct machine*) ;
 scalar_t__ FUNC_2 (int,char*) ;
 int FUNC_3 (struct dso*,struct machine*,scalar_t__,scalar_t__*,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static int FUNC_4(struct dso *VAR_1, struct machine *VAR_2,
       u64 *VAR_3, u64 *VAR_4, u64 *VAR_5)
{
 int VAR_6 = -VAR_0, VAR_7;
 u64 VAR_8;

 VAR_7 = FUNC_1(VAR_1, VAR_2);
 if (VAR_7 < 0)
  return -VAR_0;

 VAR_8 = FUNC_2(VAR_7, ".eh_frame_hdr");
 FUNC_0(VAR_7);

 if (VAR_8)
  VAR_6 = FUNC_3(VAR_1, VAR_2, VAR_8,
       VAR_3, VAR_4,
       VAR_5);


 return VAR_6;
}

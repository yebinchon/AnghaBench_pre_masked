
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ib_gid {union ib_gid const* raw; } ;
typedef int u16 ;
struct ib_gid_attr {int gid_type; int ndev; } ;




 int FUNC_0 (int ) ;
 void* FUNC_1 (int ,void*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (void*,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (void*,int ) ;
 scalar_t__ FUNC_5 (void*) ;
 int FUNC_6 (char*,union ib_gid const*,int) ;
 int FUNC_7 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_8(const union ib_gid *VAR_10,
         const struct ib_gid_attr *VAR_11,
         void *VAR_12)
{

 char *VAR_13 = FUNC_1(VAR_4, VAR_12,
            VAR_7);
 void *VAR_14 = FUNC_1(VAR_4, VAR_12,
            VAR_8);
 u16 VAR_15;

 if (!VAR_10)
  return;
 FUNC_4(VAR_14, FUNC_0(VAR_11->ndev));

 VAR_15 = FUNC_7(VAR_11->ndev);
 if (VAR_15 != 0xffff) {
  FUNC_0(VAR_4, VAR_12, VAR_9, 1);
  FUNC_0(VAR_4, VAR_12, VAR_15, VAR_15);
 }

 switch (VAR_11->gid_type) {
 case 129:
  FUNC_0(VAR_4, VAR_12, VAR_6, VAR_2);
  break;
 case 128:
  FUNC_0(VAR_4, VAR_12, VAR_6, VAR_3);
  break;

 default:
  FUNC_3(1);
 }

 if (VAR_11->gid_type != 129) {
  if (FUNC_5((void *)VAR_10))
   FUNC_0(VAR_4, VAR_12, VAR_5, VAR_0);

  else
   FUNC_0(VAR_4, VAR_12, VAR_5, VAR_1);

 }

 if ((VAR_11->gid_type == 129) ||
     !FUNC_5((void *)VAR_10))
  FUNC_6(VAR_13, VAR_10, sizeof(*VAR_10));
 else
  FUNC_6(&VAR_13[12], &VAR_10->raw[12], 4);
}

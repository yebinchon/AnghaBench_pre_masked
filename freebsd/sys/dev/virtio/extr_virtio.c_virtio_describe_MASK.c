
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int uint64_t ;
struct virtio_feature_desc {int dummy; } ;
struct sbuf {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,char const*,...) ;
 int FUNC_1 (char*,int ) ;
 char* FUNC_2 (int,int ,int ) ;
 int FUNC_3 (struct sbuf*,char const*) ;
 int FUNC_4 (struct sbuf*) ;
 int FUNC_5 (struct sbuf*) ;
 scalar_t__ FUNC_6 (struct sbuf*) ;
 int FUNC_7 (struct sbuf*,char*,int,int ) ;
 scalar_t__ FUNC_8 (struct sbuf*) ;
 int FUNC_9 (struct sbuf*,char*,char const*,...) ;
 char* FUNC_10 (int,struct virtio_feature_desc*) ;

void
FUNC_11(device_t VAR_4, const char *VAR_5,
    uint64_t VAR_6, struct virtio_feature_desc *VAR_7)
{
 struct sbuf VAR_8;
 uint64_t VAR_9;
 char *VAR_10;
 const char *VAR_11;
 int VAR_12;

 if ((VAR_10 = FUNC_2(512, VAR_1, VAR_0)) == ((void*)0)) {
  FUNC_0(VAR_4, "%s features: %#jx\n", VAR_5, (uintmax_t) VAR_6);
  return;
 }

 FUNC_7(&VAR_8, VAR_10, 512, VAR_2);
 FUNC_9(&VAR_8, "%s features: %#jx", VAR_5, (uintmax_t) VAR_6);

 for (VAR_12 = 0, VAR_9 = 1ULL << 63; VAR_9 != 0; VAR_9 >>= 1) {




  if (((VAR_6 & VAR_9) == 0) || VAR_9 == VAR_3)
   continue;

  if (VAR_12++ == 0)
   FUNC_3(&VAR_8, " <");
  else
   FUNC_3(&VAR_8, ",");

  VAR_11 = FUNC_10(VAR_9, VAR_7);
  if (VAR_11 == ((void*)0))
   FUNC_9(&VAR_8, "%#jx", (uintmax_t) VAR_9);
  else
   FUNC_3(&VAR_8, VAR_11);
 }

 if (VAR_12 > 0)
  FUNC_3(&VAR_8, ">");


 FUNC_6(&VAR_8);
 if (FUNC_8(&VAR_8) == 0)



  FUNC_0(VAR_4, "%s\n", FUNC_4(&VAR_8));

 FUNC_5(&VAR_8);
 FUNC_1(VAR_10, VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg_write {int dummy; } ;
struct msg_hdr {int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int,void*,size_t) ;
 size_t VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *) ;
 void* VAR_6 ;
 int FUNC_2 (scalar_t__,size_t) ;
 void* FUNC_3 (int *,size_t,int ,int ,scalar_t__,int ) ;
 int FUNC_4 (int,struct msg_hdr*,int) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static int FUNC_6(int VAR_7, struct msg_hdr *VAR_8)
{
 size_t VAR_9;
 int VAR_10;

 FUNC_5("transferring");
 FUNC_1(((void*)0));
 if (VAR_5 <= 0) {
  FUNC_5("...file not opened\n");
  VAR_10 = VAR_0;
  goto out;
 }

 if (VAR_8->len != sizeof(struct msg_write)) {
  FUNC_5("...invalid message length %d\n", VAR_8->len);
  VAR_10 = VAR_0;
  goto out;
 }

 VAR_10 = FUNC_0(VAR_7, (char *) &VAR_3, sizeof VAR_3);
 if (VAR_10 != sizeof VAR_3)
  goto out;

 VAR_10 = FUNC_2(VAR_5, VAR_3);
 if (VAR_10)
  goto out;

 VAR_6 = FUNC_3(((void*)0), VAR_3, VAR_2, VAR_1, VAR_5, 0);
 if (VAR_6 == (void *) -1) {
  FUNC_5("...error mapping file\n");
  VAR_10 = VAR_4;
  goto out;
 }

 FUNC_5("...%lld bytes...", (long long) VAR_3);
 FUNC_1(((void*)0));
 VAR_9 = FUNC_0(VAR_7, VAR_6, VAR_3);
 if (VAR_9 != VAR_3) {
  FUNC_5("...error receiving data\n");
  VAR_10 = (int) VAR_9;
 }
out:
 FUNC_4(VAR_7, VAR_8, VAR_10);
 return VAR_10;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct wpabuf {int dummy; } ;
struct TYPE_2__ {int new_peer_addr; int old_peer_addr; struct fst_iface* new_iface; struct fst_iface* old_iface; } ;
struct fst_session {TYPE_1__ data; } ;
struct fst_iface {int dummy; } ;
typedef scalar_t__ Boolean ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int * VAR_4 ;
 int FUNC_1 (struct fst_iface*,int ,struct wpabuf*) ;
 int FUNC_2 (struct fst_session*,int ,char*,...) ;
 int FUNC_3 (struct fst_session*,struct fst_iface*,int ,char*,int ) ;
 struct wpabuf* FUNC_4 (size_t) ;
 int FUNC_5 (struct wpabuf*) ;
 int FUNC_6 (struct wpabuf*,struct wpabuf const*) ;
 int FUNC_7 (struct wpabuf*,void const*,size_t) ;
 int FUNC_8 (struct wpabuf*,int ) ;
 scalar_t__ FUNC_9 (struct wpabuf const*) ;

__attribute__((used)) static int FUNC_10(struct fst_session *VAR_5, Boolean VAR_6,
       const void *VAR_7, size_t VAR_8,
       const struct wpabuf *VAR_9)
{
 size_t VAR_10;
 int VAR_11;
 struct wpabuf *VAR_12;
 u8 VAR_13;
 struct fst_iface *VAR_14 =
  VAR_6 ? VAR_5->data.old_iface : VAR_5->data.new_iface;

 FUNC_0(VAR_7 != ((void*)0));
 FUNC_0(VAR_8 != 0);

 VAR_13 = *(const u8 *) VAR_7;

 FUNC_0(VAR_13 <= VAR_0);

 if (!VAR_14) {
  FUNC_2(VAR_5, VAR_2,
       "no %s interface for FST Action '%s' sending",
       VAR_6 ? "old" : "new",
       VAR_4[VAR_13]);
  return -1;
 }

 VAR_10 = sizeof(u8) + VAR_8;
 if (VAR_9)
  VAR_10 += FUNC_9(VAR_9);

 VAR_12 = FUNC_4(VAR_10);
 if (!VAR_12) {
  FUNC_2(VAR_5, VAR_2,
       "cannot allocate buffer of %zu bytes for FST Action '%s' sending",
       VAR_10, VAR_4[VAR_13]);
  return -1;
 }

 FUNC_8(VAR_12, VAR_3);
 FUNC_7(VAR_12, VAR_7, VAR_8);
 if (VAR_9)
  FUNC_6(VAR_12, VAR_9);

 VAR_11 = FUNC_1(VAR_14,
        VAR_6 ? VAR_5->data.old_peer_addr :
        VAR_5->data.new_peer_addr, VAR_12);
 if (VAR_11 < 0)
  FUNC_3(VAR_5, VAR_14, VAR_2,
      "failed to send FST Action '%s'",
      VAR_4[VAR_13]);
 else
  FUNC_3(VAR_5, VAR_14, VAR_1, "FST Action '%s' sent",
      VAR_4[VAR_13]);
 FUNC_5(VAR_12);

 return VAR_11;
}

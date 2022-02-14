
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf_trace {scalar_t__ magic; } ;
struct wpabuf {scalar_t__ used; scalar_t__ size; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,struct wpabuf const*,...) ;
 int FUNC_2 (char*) ;
 struct wpabuf_trace* FUNC_3 (struct wpabuf const*) ;

__attribute__((used)) static void FUNC_4(const struct wpabuf *VAR_2, size_t VAR_3)
{







 FUNC_1(VAR_0, "wpabuf %p (size=%lu used=%lu) overflow len=%lu",
     VAR_2, (unsigned long) VAR_2->size, (unsigned long) VAR_2->used,
     (unsigned long) VAR_3);
 FUNC_2("wpabuf overflow");
 FUNC_0();
}

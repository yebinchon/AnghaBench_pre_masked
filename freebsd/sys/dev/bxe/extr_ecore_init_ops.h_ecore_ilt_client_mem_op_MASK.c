
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ilt_client_info {int flags; int start; int end; int page_size; } ;
struct ecore_ilt {int * lines; struct ilt_client_info* clients; } ;
struct bxe_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ecore_ilt* FUNC_0 (struct bxe_softc*) ;
 int FUNC_1 (struct bxe_softc*,int *,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct bxe_softc *VAR_2, int VAR_3,
       uint8_t VAR_4)
{
 int VAR_5, VAR_6;
 struct ecore_ilt *VAR_7 = FUNC_0(VAR_2);
 struct ilt_client_info *VAR_8 = &VAR_7->clients[VAR_3];

 if (!VAR_7 || !VAR_7->lines)
  return -1;

 if (VAR_8->flags & (VAR_0 | VAR_1))
  return 0;

 for (VAR_6 = 0, VAR_5 = VAR_8->start; VAR_5 <= VAR_8->end && !VAR_6; VAR_5++) {
  VAR_6 = FUNC_1(VAR_2, &VAR_7->lines[VAR_5],
        VAR_8->page_size, VAR_4);
 }
 return VAR_6;
}

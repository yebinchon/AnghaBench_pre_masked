
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ _base; } ;
struct TYPE_10__ {int _flags; scalar_t__ (* _close ) (int ) ;int _file; scalar_t__ _w; scalar_t__ _r; TYPE_1__ _bf; int _cookie; } ;
typedef TYPE_2__ FILE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(FILE *VAR_3, bool VAR_4)
{
 int VAR_5;

 VAR_5 = VAR_3->_flags & VAR_2 ? FUNC_6(VAR_3) : 0;
 if (VAR_4) {
  if (VAR_3->_close != ((void*)0) && (*VAR_3->_close)(VAR_3->_cookie) < 0)
   VAR_5 = VAR_0;
 }

 if (VAR_3->_flags & VAR_1)
  FUNC_7((char *)VAR_3->_bf._base);
 if (FUNC_3(VAR_3))
  FUNC_1(VAR_3);
 if (FUNC_2(VAR_3))
  FUNC_0(VAR_3);
 VAR_3->_file = -1;
 VAR_3->_r = VAR_3->_w = 0;
 FUNC_4();
 VAR_3->_flags = 0;
 FUNC_5();

 return (VAR_5);
}

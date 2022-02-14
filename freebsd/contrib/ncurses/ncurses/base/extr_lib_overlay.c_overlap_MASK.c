
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int _begy; int _begx; int _maxy; int _maxx; } ;
typedef TYPE_1__ WINDOW ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__ const* const,TYPE_1__* const,int,int,int,int,int,int,int const) ;
 int VAR_1 ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int
FUNC_8(const WINDOW *const VAR_2, WINDOW *const VAR_3, int const VAR_4)
{
    int VAR_5 = VAR_0;
    int VAR_6, VAR_7, VAR_8, VAR_9;
    int VAR_10, VAR_11, VAR_12, VAR_13;
    int VAR_14, VAR_15;
    int VAR_16, VAR_17;
    int VAR_18, VAR_19;

    FUNC_0((FUNC_1("overlap(%p,%p,%d)"), (const void *) VAR_2, (void ) VAR_3, VAR_4));

    if (VAR_2 != 0 && VAR_3 != 0) {
 FUNC_2(VAR_1);

 FUNC_0(("src : begy %ld, begx %ld, maxy %ld, maxx %ld",
    (long) VAR_2->_begy,
    (long) VAR_2->_begx,
    (long) VAR_2->_maxy,
    (long) VAR_2->_maxx));
 FUNC_0(("dst : begy %ld, begx %ld, maxy %ld, maxx %ld",
    (long) VAR_3->_begy,
    (long) VAR_3->_begx,
    (long) VAR_3->_maxy,
    (long) VAR_3->_maxx));

 VAR_6 = VAR_2->_begx;
 VAR_7 = VAR_2->_begy;
 VAR_8 = VAR_6 + VAR_2->_maxx;
 VAR_9 = VAR_7 + VAR_2->_maxy;

 VAR_10 = VAR_3->_begx;
 VAR_11 = VAR_3->_begy;
 VAR_12 = VAR_10 + VAR_3->_maxx;
 VAR_13 = VAR_11 + VAR_3->_maxy;

 if (VAR_12 >= VAR_6 && VAR_10 <= VAR_8 && VAR_13 >= VAR_7 && VAR_11 <= VAR_9) {
     VAR_14 = FUNC_5(VAR_7, VAR_11) - VAR_7;
     VAR_15 = FUNC_5(VAR_6, VAR_10) - VAR_6;
     VAR_16 = FUNC_5(VAR_7, VAR_11) - VAR_11;
     VAR_17 = FUNC_5(VAR_6, VAR_10) - VAR_10;
     VAR_18 = FUNC_6(VAR_9, VAR_13) - VAR_11;
     VAR_19 = FUNC_6(VAR_8, VAR_12) - VAR_10;

     VAR_5 = FUNC_4(VAR_2, VAR_3,
    VAR_14, VAR_15,
    VAR_16, VAR_17,
    VAR_18, VAR_19,
    VAR_4);
 }
 FUNC_3(VAR_1);
    }
    FUNC_7(VAR_5);
}
